//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol FNFPlayerDisplayEngine;

@protocol FNFClock <NSObject>
- (CDStruct_1b6d18a9)currentTime;
- (void)syncWithLayer:(id <FNFPlayerDisplayEngine>)arg1;
- (NSArray *)observers;
- (void)removeAllTimeObservers;
- (void)suspendTimeObserver:(id)arg1;
- (void)resumeTimeObserver:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (_Bool)addTimeObserver:(id)arg1;
- (id)createTimeObserverWithInterval:(CDStruct_1b6d18a9)arg1 block:(void (^)(struct))arg2 fireOnceAtExactTime:(_Bool)arg3 followMasterClock:(_Bool)arg4;
- (void)set:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)resume;
@end
