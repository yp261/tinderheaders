//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdConcurrentArray, FBAdDatabaseManager, FBAdTimer, NSDate, NSUUID;

@interface FBAdEventManager : NSObject
{
    NSUUID *_sessionId;
    NSDate *_sessionStartTime;
    FBAdDatabaseManager *_databaseManager;
    FBAdTimer *_dispatchTimer;
    FBAdConcurrentArray *_eventsInTransit;
}

+ (id)sharedManager;
@property(retain, nonatomic) FBAdConcurrentArray *eventsInTransit; // @synthesize eventsInTransit=_eventsInTransit;
@property(retain, nonatomic) FBAdTimer *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(retain, nonatomic) FBAdDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
@property(readonly, nonatomic) double sessionTime;
- (void)queryTokensSyncWithStatement:(const char *)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)queryEventsSyncWithStatement:(const char *)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)removeAllOrphanedEventsSyncWithDatabase:(struct sqlite3 *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)removeAllOrphanedTokensSyncWithDatabase:(struct sqlite3 *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)removeAllOrphanedEventsWithDatabase:(struct sqlite3 *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)removeAllOrphanedTokensWithDatabase:(struct sqlite3 *)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)insertEvent:(id)arg1 withDatabase:(struct sqlite3 *)arg2 withCallback:(CDUnknownBlockType)arg3;
- (const char *)eventTableString;
- (const char *)tokenTableString;
- (void)cleanupEventsSync:(id)arg1 withDatabase:(struct sqlite3 *)arg2;
- (_Bool)isEventRetriable:(id)arg1;
- (_Bool)isEventSuccessful:(id)arg1;
- (void)sendRequestInternal:(id)arg1 withExtraData:(id)arg2;
- (id)eventURL;
- (void)dispatchEventsImmediately;
- (void)dispatchEvents;
- (void)retryDispatch;
- (_Bool)shouldDispatchNow:(id)arg1;
- (void)logBrowserSessionEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logCloseEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logVideoEventForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logSnapshotForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logLinkClickForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logStoreClickForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logImpressionForToken:(id)arg1 withExtraData:(id)arg2;
- (void)logEventOfType:(id)arg1 withPriority:(unsigned long long)arg2 withToken:(id)arg3 withExtraData:(id)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)logEventOfType:(id)arg1 withPriority:(unsigned long long)arg2 withToken:(id)arg3 withExtraData:(id)arg4;
- (void)logEvent:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)tokenIdForToken:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)setupDatabaseWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseManager:(id)arg1;
- (id)init;

@end
