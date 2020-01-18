//
//  NuoOpenEndSlider.h
//  ModelViewer
//
//  Created by Dong on 1/17/20.
//  Copyright © 2020 middleware. All rights reserved.
//

#import <Cocoa/Cocoa.h>



@interface NuoOpenEndSlider : NSView


@property (assign, nonatomic) long sliderEnd;
@property (assign, nonatomic) long floatValue;

@property (strong, nonatomic) void (^valueChanged)(void);


- (instancetype)initWithName:(NSString*)name;
- (void)updateLayout;


@end


