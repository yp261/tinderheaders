//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNotificationCenter, NSTimer, NSURLSessionDataTask, TNDRCurrentUser, TNDRExperimentCoordinator;

@interface TNDRURLSessionDataTaskController : NSObject
{
    unsigned long long _attempts;
    double _timeout;
    NSURLSessionDataTask *_dataTask;
    long long _currentAttempt;
    NSTimer *_dataTaskTimer;
    NSDate *_timeoutDate;
    CDUnknownBlockType _dataTaskBlock;
    CDUnknownBlockType _completionBlock;
}

+ (id)dataTaskController:(CDUnknownBlockType)arg1 timeout:(double)arg2 attempts:(long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)dataTaskController:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType dataTaskBlock; // @synthesize dataTaskBlock=_dataTaskBlock;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(retain, nonatomic) NSTimer *dataTaskTimer; // @synthesize dataTaskTimer=_dataTaskTimer;
@property(nonatomic) long long currentAttempt; // @synthesize currentAttempt=_currentAttempt;
@property(readonly, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) unsigned long long attempts; // @synthesize attempts=_attempts;
- (void).cxx_destruct;
- (void)handleDataTaskTimeout:(id)arg1;
- (void)createDataTaskTimer;
- (void)newAttemptWithDataTaskIfValid;
- (id)startDataTask;
@property(readonly, nonatomic) TNDRCurrentUser *currentUser;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) TNDRExperimentCoordinator *experimentCoordinator;
- (id)initWithDataTaskBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 attempts:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

