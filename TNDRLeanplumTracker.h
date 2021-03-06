//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TNDRLeanplumTracker : NSObject
{
}

+ (id)sharedLeanplumTracker;
- (void)updateLocationWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)trackEvent:(id)arg1 properties:(id)arg2;
- (void)trackEvent:(id)arg1;
- (void)trackUserOptedOutAnthem;
- (void)trackUserSelectedAnthemWithParameters:(id)arg1;
- (void)trackUserDisconnectedSpotify;
- (void)trackUserSpotifyErrorEventWithParameters:(id)arg1;
- (void)trackUserSpotifyEventWithParameters:(id)arg1;
- (void)trackUserChangedSpotifySettingsWithParamters:(id)arg1;
- (void)trackUserListenedSpotifyTrackWithParamters:(id)arg1;
- (void)trackFacebookButtonTapEventWithParameters:(id)arg1;
- (void)trackAccountKitButtonTapEvent;

@end

