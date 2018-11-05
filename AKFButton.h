//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface AKFButton : UIButton
{
    NSMutableDictionary *_backgroundColorStateMap;
    NSMutableDictionary *_borderColorStateMap;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateColorsForState;
- (void)_setBorderColor:(id)arg1;
- (id)_currentBorderColor;
- (id)_currentBackgroundColor;
- (id)_colorFromMap:(id)arg1 forState:(unsigned long long)arg2 matchingState:(unsigned long long)arg3;
- (id)_colorFromMap:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;

@end
