/**
 * Copyright (c) 2016-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C" {
#endif

@protocol FBObjectReferenceWithLayout;
@protocol FBObjectReference;

/**
 @return An array of id<FBObjectReference> objects that will have only those references
 that are retained by the object. It also goes through parent classes.
 */
NSArray<id<FBObjectReference>> *_Nonnull FBGetObjectStrongReferences(id _Nullable obj,
                                                                     NSMutableDictionary<NSString*, NSArray<id<FBObjectReference>> *> *_Nullable layoutCache,
                                                                     BOOL shouldIncludeSwiftObjects);

#ifdef __cplusplus
}
#endif
