//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TNDRZoom)
- (id)pulsatingAnimationDuration:(double)arg1 repeat:(double)arg2 finalScale:(double)arg3 pulseCenter:(struct CGPoint)arg4;
- (void)zoomOutFromPoint:(struct CGPoint)arg1 scale:(double)arg2 pulsate:(_Bool)arg3 numberOfPulses:(long long)arg4 withCompletetionBlock:(CDUnknownBlockType)arg5;
- (void)zoomOutFromPoint:(struct CGPoint)arg1 scale:(double)arg2 withCompletetionBlock:(CDUnknownBlockType)arg3;
- (void)zoomOutFromPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (void)zoomOutFromOffset:(struct CGPoint)arg1 scale:(double)arg2;
- (void)zoomInToPoint:(struct CGPoint)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)zoomInToPoint:(struct CGPoint)arg1 scale:(double)arg2;
- (void)zoomInToOffset:(struct CGPoint)arg1 scale:(double)arg2;
- (struct CGPoint)pointInCardFromOffset:(struct CGPoint)arg1;
@end

