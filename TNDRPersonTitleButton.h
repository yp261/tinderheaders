//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRTitleButton.h"

@class CAShapeLayer, UIBezierPath;

@interface TNDRPersonTitleButton : TNDRTitleButton
{
    UIBezierPath *_bezierPath;
    struct CGSize _titleSize;
    struct CGSize _buttonSize;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (void)updateBadgePosition;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupBezierPath;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
