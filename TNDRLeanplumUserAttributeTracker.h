//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, TNDRAppDelegate, TNDRCurrentUser, TNDRLocationManager, _TtC6Tinder15LeanplumService;

@interface TNDRLeanplumUserAttributeTracker : NSObject
{
}

+ (id)sharedTracker;
- (id)attributeForGroupState:(long long)arg1;
- (id)genderAttributesForCurrentUser:(id)arg1;
- (id)geographicAttributesForCurrentUser:(id)arg1;
- (id)spotifyAttributesForCurrentUser:(id)arg1;
- (id)pushNotificationAttributesForCurrentUser:(id)arg1;
- (id)customUserAttributes;
- (void)resetUserActivityCounts;
- (void)updateUserAttributeWithKey:(id)arg1 value:(_Bool)arg2;
- (void)updateIsUserSpotifyConnected:(_Bool)arg1;
- (void)updateUserHasSpotifyThemeSong:(_Bool)arg1;
- (void)updateIsPushEnabled:(_Bool)arg1;
- (void)updateUserUnreadMessagesCountAttribute:(long long)arg1;
- (void)handleUserSync:(id)arg1;
- (void)setUserAttributes:(id)arg1;
- (void)syncUserAttributes;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
- (id)dateFormatter;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser;
@property(readonly, nonatomic) TNDRLocationManager *locationManager;
@property(readonly, nonatomic) _TtC6Tinder15LeanplumService *leanplumService;
@property(readonly, nonatomic) TNDRAppDelegate *appDelegate;
- (void)setup;
- (id)init;
- (void)dealloc;

@end
