//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRExperimentVariable.h"

@class NSDictionary;

@interface TNDRBoostOptimizationExperimentVariable : TNDRExperimentVariable
{
    NSDictionary *_mapping;
}

@property(copy, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (void).cxx_destruct;
- (id)mappingOfTitlesToPotentialValues;
- (_Bool)isOverridable;
- (id)nonOverriddenValue;
- (id)name;

@end

