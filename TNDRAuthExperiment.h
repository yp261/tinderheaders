//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNDRExperiment.h"

@class TNDRAuthExperimentVariableAccountKitEnabled, TNDRAuthExperimentVariableEUABTest5MinTimeEnabled, TNDRAuthExperimentVariableEUABTestEnabled, TNDRAuthExperimentVariableModal20SecTimeEnabled, TNDRAuthExperimentVariablePhase4Enabled;

@interface TNDRAuthExperiment : TNDRExperiment
{
    TNDRAuthExperimentVariableAccountKitEnabled *_accountKitEnabledVariable;
    TNDRAuthExperimentVariablePhase4Enabled *_phase4EnabledVariable;
    TNDRAuthExperimentVariableModal20SecTimeEnabled *_modal20SecTimeEnabledVariable;
    TNDRAuthExperimentVariableEUABTestEnabled *_euABTestEnabled;
    TNDRAuthExperimentVariableEUABTest5MinTimeEnabled *_euABTest5MinEnabled;
}

@property(retain, nonatomic) TNDRAuthExperimentVariableEUABTest5MinTimeEnabled *euABTest5MinEnabled; // @synthesize euABTest5MinEnabled=_euABTest5MinEnabled;
@property(retain, nonatomic) TNDRAuthExperimentVariableEUABTestEnabled *euABTestEnabled; // @synthesize euABTestEnabled=_euABTestEnabled;
@property(retain, nonatomic) TNDRAuthExperimentVariableModal20SecTimeEnabled *modal20SecTimeEnabledVariable; // @synthesize modal20SecTimeEnabledVariable=_modal20SecTimeEnabledVariable;
@property(retain, nonatomic) TNDRAuthExperimentVariablePhase4Enabled *phase4EnabledVariable; // @synthesize phase4EnabledVariable=_phase4EnabledVariable;
@property(retain, nonatomic) TNDRAuthExperimentVariableAccountKitEnabled *accountKitEnabledVariable; // @synthesize accountKitEnabledVariable=_accountKitEnabledVariable;
- (void).cxx_destruct;
- (id)allExperimentVariables;
- (id)name;
@property(readonly, nonatomic) _Bool isInEUABTest;
@property(readonly, nonatomic) _Bool isInEUABTestVariant;
@property(readonly, nonatomic) _Bool isEUABTestFinished;
@property(readonly, nonatomic) _Bool isEUABTest5MinEnabled;
@property(readonly, nonatomic) _Bool isEUABTestEnabled;
@property(readonly, nonatomic) _Bool isModal20SecTimeEnabled;
@property(readonly, nonatomic) _Bool isPhase4Enabled;
@property(readonly, nonatomic) _Bool isAccountKitEnabled;

@end

