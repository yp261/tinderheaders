//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TNDRCoreDataService;

@interface TNDRApplicationShortcutManager : NSObject
{
}

+ (id)sharedInstance;
- (void)updateHomeScreenApplicationShortcuts;
- (void)removeAllApplicationShortcuts;
- (void)handleCurrentUserDidClearInformation:(id)arg1;
- (void)handleApplicationDidBackground:(id)arg1;
- (void)registerNotifications;
- (void)handleApplicationShortcutItem:(id)arg1 forLaunch:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setup;
@property(readonly, nonatomic) TNDRCoreDataService *dataService;

@end
