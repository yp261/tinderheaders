//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSLock, NSRunLoop;

@interface FNFRenderingThread : NSThread
{
    NSLock *_runLoopStopLock;
    NSRunLoop *_runLoop;
    double _priority;
}

+ (id)renderingThreadAllowingAppInactivePlayback:(_Bool)arg1;
@property(nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (void)main;
- (void)_addDisplayLinkInternal:(id)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)addDisplayLink:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initAllowingAppInactivePlayback:(_Bool)arg1;

@end

