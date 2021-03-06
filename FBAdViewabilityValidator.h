//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBAdTimer, NSMutableDictionary, NSString, UIView;
@protocol FBAdViewabilityValidatorDelegate;

@interface FBAdViewabilityValidator : NSObject
{
    struct recursive_mutex _historyLock;
    _Bool _viewOnScreenNotificationFinished;
    _Bool _observingNotifications;
    NSObject<FBAdViewabilityValidatorDelegate> *_delegate;
    long long _currentStatus;
    double _lastViewabilityPercentage;
    FBAdTimer *_checkViewabilityTimer;
    UIView *_view;
    long long _minViewabilityPercentage;
    long long _tickDuration;
    long long _currentTickCount;
    double _initialDelay;
    double _checkInterval;
    NSMutableDictionary *_viewabilityHistory;
}

@property(copy, nonatomic) NSMutableDictionary *viewabilityHistory; // @synthesize viewabilityHistory=_viewabilityHistory;
@property(nonatomic) double checkInterval; // @synthesize checkInterval=_checkInterval;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(nonatomic) long long currentTickCount; // @synthesize currentTickCount=_currentTickCount;
@property(nonatomic) long long tickDuration; // @synthesize tickDuration=_tickDuration;
@property(nonatomic) long long minViewabilityPercentage; // @synthesize minViewabilityPercentage=_minViewabilityPercentage;
@property(nonatomic, getter=isObservingNotifications) _Bool observingNotifications; // @synthesize observingNotifications=_observingNotifications;
@property(nonatomic, getter=isviewOnScreenNotificationFinished) _Bool viewOnScreenNotificationFinished; // @synthesize viewOnScreenNotificationFinished=_viewOnScreenNotificationFinished;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) FBAdTimer *checkViewabilityTimer; // @synthesize checkViewabilityTimer=_checkViewabilityTimer;
@property double lastViewabilityPercentage; // @synthesize lastViewabilityPercentage=_lastViewabilityPercentage;
@property long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) __weak NSObject<FBAdViewabilityValidatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopObservingNotifications;
- (void)onApplicationForegrounded;
- (void)onApplicationBackgrounded;
- (void)startObservingNotifications;
- (void)resumeTimer;
- (void)invalidateTimer;
- (void)stopViewabilityCheck;
- (void)scheduleViewabilityCheckWithInterval:(double)arg1 withInitialDelay:(double)arg2;
- (void)scheduleViewabilityCheck;
- (void)sendViewNotification:(long long)arg1;
- (void)updateCurrentStatus:(long long)arg1;
- (void)checkViewability;
- (void)isViewOnScreenWithBlock:(CDUnknownBlockType)arg1;
- (id)logSuccess:(_Bool)arg1 withStatus:(long long)arg2 withViewabilityPercentage:(double)arg3;
@property(readonly, copy, nonatomic) NSString *viewabilityHistoryJSON;
- (void)addHistoryEvent:(long long)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 withInterval:(double)arg2 withInitialDelay:(double)arg3 withMinViewability:(long long)arg4 withTickDuration:(long long)arg5 shouldObserveNotifications:(_Bool)arg6;
- (id)initWithView:(id)arg1 withMinViewability:(long long)arg2 shouldObserveNotifications:(_Bool)arg3;

@end

