//
//  SKBarrageRenderView.h
//  SKBarrageRenderDemo
//
//  Created by KUN on 2017/11/27.
//  Copyright © 2017年 KUN. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SKBarrageModelProtocol <NSObject>

@end

@interface SKBarrageRenderView : UIView


/**
 发送单一弹幕

 @param barrageModel 弹幕model, 需要遵守 SKBarrageModelProtocol 协议
 @param render 是否立即显示在屏幕上
 */
- (void)sendBarrage:(id<SKBarrageModelProtocol>)barrageModel immediatelyRender:(BOOL)render;


/**
 发送多个弹幕

 @param barrageModels  弹幕model, 需要遵守 SKBarrageModelProtocol 协议
 @param render 是否立即显示在屏幕上
 */
- (void)sendBarrages:(NSArray < id<SKBarrageModelProtocol> > *)barrageModels immediatelyRender:(BOOL)render;

@end
