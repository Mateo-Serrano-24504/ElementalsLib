#ifndef __ELEMENTALS__TRACKER__
#define __ELEMENTALS__TRACKER__

#include "destroyers.h"

/**
 * @brief A struct that tracks all instances of elementals.
 * 
 * A `Tracker` is an instance of the tracker_t struct.
 * It is delegated the task to handle the deallocation of the dynamic memory
 * reserved for all instances of the elem_t struct.
 * It stores pointers to all instances in the form of an array, in order to
 * handle their deallocation when the `tracker_finish` function is called.
 */
typedef struct {
    elem_t** items; ///< The array that tracks all instances of the elem_t struct.
    size_t size; ///< The number of instances tracked.
    size_t capacity; ///< The maximum numbers of instances than can be tracked. It can be expanded.
} tracker_t;

/**
 * @brief Initializes a global tracker.
 * 
 * Onde the `tracker_init` function is called, the user should not worry
 * about the dynamic memory allocated by the functions of this library,
 * as the tracker will handle that in the backend.
 * Also, reserves dynamic memory for the tracker and its array.
 */
void tracker_init();

/**
 * @brief Finishes the tracking process of the global tracker
 * 
 * The global tracker frees the memory of all instances of elementals
 * that has tracked, and the dynamic memory that has reserved for
 * itself.
 * 
 * @warning Once the `tracker_finish` function is called, no other
 * function that involves the tracker must be called, with the
 * exception of the `tracker_init` function. Besides, every pointer
 * to an instance of an elemental that had been created with a builder
 * function becomes a dangling pointer and must not be passed
 * as a parameter to neither a getter nor setter function.
 */
void tracker_finish();

/**
 * @brief Expands the global tracker by duplicating its capacity
 * 
 * Duplicates the capacity of the global tracker and reallocates
 * the memory reserved for its array of pointers to elementals with
 * the new capacity.
 * 
 * @note This function must not be called by the user of
 * the library. It is only used in the backend.
 */
void tracker_expand();

/**
 * @brief Pushes a pointer to an instance of the elem_t struct
 * to the global tracker.
 * 
 * If the tracker is complete (i.e. the number of instances it is tracking
 * equals its capacity), it gets expanded. Regardless of that, the pointer
 * to the instance of the elemental gets pushed to the tracker's array.
 * 
 * @note This function must not be called by the user of the library.
 * It is only used in the backend.
 * 
 * @param elem Pointer to the elemental that must be tracked.
 */
void tracker_push(elem_t* elem);

/**
 * @brief A global pointer to a tracker_t variable that is used to track
 * the instances of elementals
 * 
 * @attention Both this global variable and the tracker it points to must NOT
 * be modified manually. Doing so might lead to unexpected behaviour.
 */
extern tracker_t* __elem__tracker__;

#endif // __ELEMENTALS__TRACKER__