//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface _TtC6Tinder9Analytics : NSObject
{
    // Error parsing type: , name: userDataSource
    // Error parsing type: , name: networkRequestMonitor
    // Error parsing type: , name: notificationCenter.storage
    // Error parsing type: , name: queue
    // Error parsing type: , name: eventsArchiveQueue
    // Error parsing type: , name: eventsInTransitArchiveQueue
    // Error parsing type: , name: eventsPath
    // Error parsing type: , name: eventsInTransitPath
    // Error parsing type: , name: analyticsURL
    // Error parsing type: , name: service
    // Error parsing type: , name: config
    // Error parsing type: , name: timer
    // Error parsing type: , name: events
    // Error parsing type: , name: eventsInTransit
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)handleCurrentUserWillLogout;
- (void)sendBatchTimerFired;
- (void)restoreEventQueues;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
@property(nonatomic, copy) NSArray *eventsInTransit; // @synthesize eventsInTransit;
@property(nonatomic, copy) NSArray *events; // @synthesize events;
@property(nonatomic, readonly) NSURL *eventsInTransitPath; // @synthesize eventsInTransitPath;
@property(nonatomic, readonly) NSURL *eventsPath; // @synthesize eventsPath;

@end
