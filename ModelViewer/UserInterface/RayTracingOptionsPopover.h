//
//  RayTracingOptionsPopover.h
//  ModelViewer
//
//  Created by Dong on 12/8/19.
//  Copyright © 2019 middleware. All rights reserved.
//

#import <AppKit/AppKit.h>



@class ModelState;
@protocol ModelOptionUpdate;



@interface RayTracingOptionsPopover : NSViewController


- (instancetype)initWithPopover:(NSPopover*)popover
                 withModelState:(ModelState*)modelState
                   withDelegate:(id<ModelOptionUpdate>)delegate;


@end


