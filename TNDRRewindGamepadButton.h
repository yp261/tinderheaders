//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRGamepadButton.h"

@interface TNDRRewindGamepadButton : TNDRGamepadButton
{
    _Bool _pseudoEnabled;
}

@property(nonatomic) _Bool pseudoEnabled; // @synthesize pseudoEnabled=_pseudoEnabled;
- (void)rotateIcon:(double)arg1;
- (void)animateIcon;
- (void)setPseudoEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1 forDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEnabled:(_Bool)arg1;
- (id)iconLayerForSnapshot;
- (id)iconLayerPath;
- (void)layoutSubviews;
- (double)iconLayerSizeModifier;
- (void)setupIconLayer;
- (id)initWithButtonType:(unsigned long long)arg1 showRoundedBackground:(_Bool)arg2;

@end

