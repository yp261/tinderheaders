//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBInstreamAdButton.h"

@interface FBInstreamSkipButtonView : FBInstreamAdButton
{
    unsigned long long _remainingSeconds;
}

@property(nonatomic) unsigned long long remainingSeconds; // @synthesize remainingSeconds=_remainingSeconds;
- (id)textWithRemainingSeconds:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRemainingSeconds:(unsigned long long)arg1;

@end
