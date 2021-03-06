//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (Adjustments)
+ (double)convertToFloatFromDegrees:(long long)arg1;
+ (long long)convertToDegreesFromFloat:(double)arg1;
- (double)brightnessValue;
- (double)saturationValue;
- (id)colorWithBrightnessAt:(double)arg1;
- (id)colorWithSaturationAt:(double)arg1;
- (id)complimentaryColorAtSaturation:(double)arg1 andBrightness:(double)arg2;
- (_Bool)isBrightnessAbove:(double)arg1;
- (id)saturateColor:(double)arg1;
- (id)desaturateColor:(double)arg1;
- (id)lightenColor:(double)arg1;
- (id)darkenColor:(double)arg1;
- (id)darkerColor;
- (id)lighterColor;
@end

