//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAdProviderResponseAds.h"

@class FBAdPlacement;

@interface FBAdProviderCannedResponse : FBAdProviderResponseAds
{
    FBAdPlacement *_cannedPlacement;
}

@property(retain, nonatomic) FBAdPlacement *cannedPlacement; // @synthesize cannedPlacement=_cannedPlacement;
- (void).cxx_destruct;
- (id)adPlacement;
- (id)initWithResponse:(id)arg1 forAdAtIndex:(long long)arg2;

@end

