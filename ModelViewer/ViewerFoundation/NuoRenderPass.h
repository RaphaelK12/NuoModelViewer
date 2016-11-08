//
//  NuoRenderer.h
//  ModelViewer
//
//  Created by middleware on 11/8/16.
//  Copyright © 2016 middleware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>


#import "NuoRenderPassTarget.h"



@interface NuoRenderPass : NSObject

@property (nonatomic, weak) id<MTLDevice> device;

/**
 *  data exchange with adjecent passes
 */
@property (nonatomic, weak) id<MTLTexture> sourceTexture;
@property (nonatomic, strong) NuoRenderPassTarget* renderTarget;


- (void)drawWithCommandBuffer:(id<MTLCommandBuffer>)commandBuffer;


@end
