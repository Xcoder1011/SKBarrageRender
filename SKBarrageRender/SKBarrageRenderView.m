//
//  SKBarrageRenderView.m
//  SKBarrageRenderDemo
//
//  Created by KUN on 2017/11/27.
//  Copyright © 2017年 KUN. All rights reserved.
//

#import "SKBarrageRenderView.h"

@interface SKBarrageRenderView ()
@end


@implementation SKBarrageRenderView

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        self.clipsToBounds = YES;
    }
    return self;
}

- (void)sendBarrage:(id<SKBarrageModelProtocol>)barrageModel immediatelyRender:(BOOL)render {
    
}

- (void)sendBarrages:(NSArray < id<SKBarrageModelProtocol> > *)barrageModels immediatelyRender:(BOOL)render {
    
}

@end
