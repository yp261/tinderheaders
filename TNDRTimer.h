//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TNDRTimer : NSObject
{
    NSMutableDictionary *_namesToTimers;
}

+ (id)sharedTimer;
@property(retain, nonatomic) NSMutableDictionary *namesToTimers; // @synthesize namesToTimers=_namesToTimers;
- (void).cxx_destruct;
- (double)currentElapse:(id)arg1;
- (double)stopTimer:(id)arg1;
- (void)startTimer:(id)arg1;
- (id)init;

@end
