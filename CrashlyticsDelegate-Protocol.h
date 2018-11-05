//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLSReport, Crashlytics;
@protocol CLSCrashReport;

@protocol CrashlyticsDelegate <NSObject>

@optional
- (_Bool)crashlyticsCanUseBackgroundSessions:(Crashlytics *)arg1;
- (void)crashlyticsDidDetectReportForLastExecution:(CLSReport *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)crashlytics:(Crashlytics *)arg1 didDetectCrashDuringPreviousExecution:(id <CLSCrashReport>)arg2;
- (void)crashlyticsDidDetectCrashDuringPreviousExecution:(Crashlytics *)arg1;
@end

