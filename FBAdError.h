//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdError : NSObject
{
}

+ (id)getNSError:(long long)arg1 description:(id)arg2 detail:(id)arg3;
+ (id)getErrorFromJSON:(id)arg1 withCode:(long long)arg2 description:(id)arg3 detail:(id)arg4;
+ (id)getNSError:(long long)arg1 detail:(id)arg2;
+ (id)getNSError:(long long)arg1 description:(id)arg2;
+ (id)getNSError:(long long)arg1;
+ (id)defaultDescriptionForKey:(id)arg1;
+ (id)defaultDescriptions;

@end
