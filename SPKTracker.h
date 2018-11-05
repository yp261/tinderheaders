//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale, NSMutableArray, NSString, NSTimer, NSUserDefaults, TNDRCoreDataService, TNDRCurrentUser, TNDRLocationManager;
@protocol OS_dispatch_queue;

@interface SPKTracker : NSObject
{
    NSMutableArray *_events;
    long long _unarchivedEventCount;
    double _sendFrequency;
    long long _archiveFrequency;
    long long _batchSize;
    NSString *_token;
    TNDRCurrentUser *_currentUser;
    NSDictionary *_userProperties;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _taskId;
}

+ (id)sharedInstance;
+ (void)assertPropertyTypes:(id)arg1;
+ (_Bool)inBackground;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSDictionary *userProperties; // @synthesize userProperties=_userProperties;
@property(retain, nonatomic) TNDRCurrentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) long long archiveFrequency; // @synthesize archiveFrequency=_archiveFrequency;
@property(nonatomic) double sendFrequency; // @synthesize sendFrequency=_sendFrequency;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)handleCurrentUserWillLogout:(id)arg1;
- (id)readEventsFromDiskAtPath:(id)arg1;
- (void)unarchive;
- (void)writeEventsToDisk:(id)arg1 path:(id)arg2;
- (void)archiveFromSerialQueue;
- (void)archive;
- (void)stopEventSendTimer;
- (double)batchPercentToMaxSize:(id)arg1;
- (id)checkAndTrimBatchSize:(id)arg1 forEvents:(id)arg2;
- (id)buildBatchFromEvents:(id)arg1;
- (void)sendEvents:(id)arg1 endpoint:(id)arg2 batchComplete:(CDUnknownBlockType)arg3;
- (void)sendEventTimerFired:(id)arg1;
- (void)startEventSendTimerWithFrequency:(double)arg1;
- (void)checkForBatchTriggerEventsAndSend:(id)arg1;
- (void)track:(id)arg1 withProperties:(id)arg2 insertCommonProperties:(_Bool)arg3;
- (void)track:(id)arg1 withProperties:(id)arg2;
- (void)track:(id)arg1;
- (id)userPropertyValueForKey:(id)arg1;
- (void)removeUserPropertyValueForKey:(id)arg1;
- (void)addUserPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)latLongForCurrentUser:(id)arg1;
- (id)geographicPropertiesForCurrentUser:(id)arg1;
@property(readonly, nonatomic) NSLocale *userLocale;
- (id)timeStampInMSFrom:(id)arg1;
@property(readonly, nonatomic) NSString *advertisingID;
@property(readonly, nonatomic) NSString *vendorID;
@property(readonly, nonatomic) NSString *deviceUniqueID;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) double screenWidth;
@property(readonly, nonatomic) double screenHeight;
@property(readonly, nonatomic) NSString *manufacturerName;
@property(readonly, nonatomic) NSString *deviceModel;
@property(readonly, nonatomic) NSString *operatingSystemRevisionVersion;
@property(readonly, nonatomic) NSString *operatingSystemMinorVersion;
@property(readonly, nonatomic) NSString *operatingSystemMajorVersion;
@property(readonly, nonatomic) NSString *operatingSystemVersion;
@property(readonly, nonatomic) NSString *operatingSystemName;
@property(readonly, nonatomic) NSString *applicationRevisionVersion;
@property(readonly, nonatomic) NSString *applicationMinorVersion;
@property(readonly, nonatomic) NSString *applicationMajorVersion;
@property(readonly, nonatomic) NSString *applicationShortVersion;
@property(readonly, nonatomic) NSString *applicationVersion;
@property(readonly, nonatomic) NSString *applicationInternalVersion;
@property(readonly, nonatomic) NSString *libraryVersion;
- (id)description;
- (void)setup;
- (id)init;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;
- (void)dealloc;
- (void)trackUserEvent;
- (void)trackDeviceEvent;
@property(readonly, nonatomic) TNDRLocationManager *locationManager;

@end

