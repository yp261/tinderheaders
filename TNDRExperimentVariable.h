//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, _TtC6Tinder15LeanplumService;
@protocol TNDRExperimentVariableDelegate;

@interface TNDRExperimentVariable : NSObject
{
    _Bool _isOverridable;
    id <TNDRExperimentVariableDelegate> _delegate;
    NSDictionary *_detailDictionary;
    NSString *_name;
    NSObject *_nonOverriddenValue;
    NSDictionary *_mappingOfTitlesToPotentialValues;
    _TtC6Tinder15LeanplumService *_leanplumService;
    NSObject *_overriddenValue;
}

@property(retain, nonatomic) NSObject *overriddenValue; // @synthesize overriddenValue=_overriddenValue;
@property(retain, nonatomic) _TtC6Tinder15LeanplumService *leanplumService; // @synthesize leanplumService=_leanplumService;
@property(readonly, copy, nonatomic) NSDictionary *mappingOfTitlesToPotentialValues; // @synthesize mappingOfTitlesToPotentialValues=_mappingOfTitlesToPotentialValues;
@property(readonly, nonatomic) NSObject *nonOverriddenValue; // @synthesize nonOverriddenValue=_nonOverriddenValue;
@property(readonly, nonatomic) _Bool isOverridable; // @synthesize isOverridable=_isOverridable;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSDictionary *detailDictionary; // @synthesize detailDictionary=_detailDictionary;
@property(nonatomic) __weak id <TNDRExperimentVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long retrieveIntegerValue;
@property(readonly, copy, nonatomic) NSString *retrieveStringValue;
@property(readonly, nonatomic) _Bool retrieveBoolValue;
- (void)clearOverride;
- (void)overrideValueWithTitle:(id)arg1;
- (void)overrideValueWithValue:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
@property(readonly, nonatomic) _Bool hasDetail;
@property(readonly, copy, nonatomic) NSArray *titlesOfPotentialValues;
@property(readonly, nonatomic) _Bool isOverridden;
@property(readonly, nonatomic) NSObject *value;

@end

