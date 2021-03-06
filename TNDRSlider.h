//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSNumber, NSString, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer;

@interface TNDRSlider : UIControl <UIGestureRecognizerDelegate>
{
    UIImageView *_sliderInactive;
    UIImageView *_sliderActive;
    _Bool _isSingleHead;
    UIImageView *_lowHead;
    UIImageView *_hiHead;
    float _lowValue;
    float _hiValue;
    UIPanGestureRecognizer *_lowPanGR;
    UIPanGestureRecognizer *_hiPanGR;
    UILongPressGestureRecognizer *_lowPressGR;
    UILongPressGestureRecognizer *_hiPressGR;
    struct CGPoint _panStartPoint;
    struct CGPoint _panCurPoint;
    _Bool shouldShowTooltip;
    _Bool _maxIsRange;
    NSString *_valueLabel;
    NSNumber *_minimumSpan;
    NSNumber *_startValue;
    NSNumber *_endValue;
    NSNumber *_maximumValue;
    NSNumber *_minimumValue;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool maxIsRange; // @synthesize maxIsRange=_maxIsRange;
@property(retain, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(retain, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) NSNumber *endValue; // @synthesize endValue=_endValue;
@property(retain, nonatomic) NSNumber *startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) NSNumber *minimumSpan; // @synthesize minimumSpan=_minimumSpan;
@property(retain, nonatomic) NSString *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)alignThumb:(id)arg1 toValue:(int)arg2;
- (id)valueOfPositionFor:(id)arg1;
- (float)calculateMinimumSpanPixels;
- (void)handleHeadPan:(id)arg1;
- (void)handlePressPan:(id)arg1;
- (void)registerGestureRecognizers;
- (id)hiValue;
- (id)lowValue;
- (_Bool)isDualHead;
- (void)calculateAllSubFramesAndPositions;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

