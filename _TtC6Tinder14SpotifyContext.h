//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, TNDRAnalyticsTracker, TNDRCoreDataService, TNDRCurrentUser, TNDRDataManager, TNDREnvironmentHelper, TNDRLeanplumTracker, TNDRLeanplumUserAttributeTracker, TNDRNotificationWindow, TNDRSpotifyAuthenticator, TNDRSpotifyExperiment, TNDRUser;

@interface _TtC6Tinder14SpotifyContext : NSObject
{
    // Error parsing type: , name: currentUser
    // Error parsing type: , name: spotifyExperiment
    // Error parsing type: , name: spotifyAuthenticator
    // Error parsing type: , name: userDefaults
    // Error parsing type: , name: themeSongNameKey
    // Error parsing type: , name: dataService
    // Error parsing type: , name: analyticsTracker
    // Error parsing type: , name: environmentHelper
    // Error parsing type: , name: dataManager
    // Error parsing type: , name: leanplumAttributeTracker
    // Error parsing type: , name: leanplumTracker
    // Error parsing type: , name: notificationWindow
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)newSpotifyLoginViewControllerWith:(CDUnknownBlockType)arg1;
- (void)processWithJson:(id)arg1 with:(CDUnknownBlockType)arg2;
- (void)handleConnectionFailure;
@property(nonatomic, readonly) long long selectedTopArtistsCount;
@property(nonatomic, readonly) NSString *themeTrackArtistsNames;
@property(nonatomic, readonly) NSString *artistsNames;
@property(nonatomic, readonly) NSString *themeSongName;
@property(nonatomic, readonly) NSString *spotifyUsername;
@property(nonatomic, readonly) _Bool hasThemeSong;
@property(nonatomic, readonly) _Bool isSpotifyConnected;
@property(nonatomic, readonly) _Bool isSpotifyAvailable;
@property(nonatomic, readonly) TNDRUser *coreDataCurrentUser;
- (id)initWith:(id)arg1;
@property(nonatomic, readonly) TNDRNotificationWindow *notificationWindow; // @synthesize notificationWindow;
@property(nonatomic, readonly) TNDRLeanplumTracker *leanplumTracker; // @synthesize leanplumTracker;
@property(nonatomic, readonly) TNDRLeanplumUserAttributeTracker *leanplumAttributeTracker; // @synthesize leanplumAttributeTracker;
@property(nonatomic, readonly) TNDRDataManager *dataManager; // @synthesize dataManager;
@property(nonatomic, readonly) TNDREnvironmentHelper *environmentHelper; // @synthesize environmentHelper;
@property(nonatomic, readonly) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker;
@property(nonatomic, readonly) TNDRCoreDataService *dataService; // @synthesize dataService;
@property(nonatomic, readonly) NSString *themeSongNameKey; // @synthesize themeSongNameKey;
@property(nonatomic, readonly) NSUserDefaults *userDefaults; // @synthesize userDefaults;
@property(nonatomic, readonly) TNDRSpotifyAuthenticator *spotifyAuthenticator; // @synthesize spotifyAuthenticator;
@property(nonatomic, readonly) TNDRSpotifyExperiment *spotifyExperiment; // @synthesize spotifyExperiment;
@property(nonatomic, readonly) TNDRCurrentUser *currentUser; // @synthesize currentUser;

@end

