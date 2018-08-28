//
//  ModelRayTracingBlendRenderer.h
//  ModelViewer
//
//  Created by middleware on 8/27/18.
//  Copyright © 2018 middleware. All rights reserved.
//

#import "NuoRenderPipelinePass.h"



@interface ModelRayTracingBlendRenderer : NuoRenderPipelinePass


@property (nonatomic, strong) id<MTLTexture> illumination;


@end


