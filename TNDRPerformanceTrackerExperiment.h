//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRExperiment.h"

@class TNDRPerformanceTrackerEnabledExperimentVariable;

@interface TNDRPerformanceTrackerExperiment : TNDRExperiment
{
    TNDRPerformanceTrackerEnabledExperimentVariable *_enabledExperimentVariable;
}

@property(retain, nonatomic) TNDRPerformanceTrackerEnabledExperimentVariable *enabledExperimentVariable; // @synthesize enabledExperimentVariable=_enabledExperimentVariable;
- (void).cxx_destruct;
- (id)allExperimentVariables;
- (id)name;
- (_Bool)isTrackerEnabled;

@end

