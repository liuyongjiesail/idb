/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <FBDeviceControl/FBDeviceManager.h>
#import <FBDeviceControl/FBAMDefines.h>

NS_ASSUME_NONNULL_BEGIN

@class FBAMDevice;

/**
 Class for obtaining FBAMDevice instances.
 */
@interface FBAMDeviceManager : FBDeviceManager<FBAMDevice *>

/**
 The Designated Initializer
 */
@property (nonatomic, class, strong, readonly) FBAMDeviceManager *sharedManager;

/**
 Starts using the AMDeviceRef via Connections.

 @param device the device to use.
 @param calls the calls to use.
 @param logger the logger to use.
 @param error an error out for any error that occurs.
 @return YES if successful, NO otherwise.
 */
+ (BOOL)startUsing:(AMDeviceRef)device calls:(AMDCalls)calls logger:(id<FBControlCoreLogger>)logger error:(NSError **)error;

/**
 Stops using the AMDeviceRef connections.

 @param device the device to use.
 @param calls the calls to use.
 @param logger the logger to use.
 @param error an error out for any error that occurs.
 @return YES if successful, NO otherwise.
 */
+ (BOOL)stopUsing:(AMDeviceRef)device calls:(AMDCalls)calls logger:(id<FBControlCoreLogger>)logger error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
