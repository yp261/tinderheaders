//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface GADWeakReference : NSObject
{
    id _weakObject;
    NSValue *_uniqueID;
}

+ (_Bool)set:(id)arg1 containsObject:(id)arg2;
@property(readonly, nonatomic) NSValue *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

