//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADScheduledNotification : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_notificationNamesAndTimers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)intervalStringForNotificationName:(id)arg1;
- (id)notificationNameForIntervalString:(id)arg1;
- (void)startTimerForNotification:(id)arg1 interval:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (double)normalizedInterval:(double)arg1;
- (void)stopObservingNotificationWithName:(id)arg1;
- (id)notificationNameForInterval:(double)arg1;
- (id)init;
- (void)dealloc;

@end

