//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TNDRInterestsViewModel : NSObject
{
    NSArray *_combinedInterests;
    NSArray *_commonInterests;
    NSArray *_uncommonInterests;
}

@property(retain, nonatomic) NSArray *uncommonInterests; // @synthesize uncommonInterests=_uncommonInterests;
@property(retain, nonatomic) NSArray *commonInterests; // @synthesize commonInterests=_commonInterests;
@property(retain, nonatomic) NSArray *combinedInterests; // @synthesize combinedInterests=_combinedInterests;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long totalNumInterests;
- (_Bool)isCommonInterestAtIndexPath:(id)arg1;
- (id)textForIndexPath:(id)arg1;
- (id)initWithCommonInterests:(id)arg1 andUncommonInterests:(id)arg2;

@end

