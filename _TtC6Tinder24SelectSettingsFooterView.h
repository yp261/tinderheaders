//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, TNDRAnalyticsTracker, UIImageView, UILabel, UISwitch;

@interface _TtC6Tinder24SelectSettingsFooterView : UIView
{
    // Error parsing type: , name: analyticsTracker
    // Error parsing type: , name: selectRecsEnabledAtStart
    // Error parsing type: , name: toggleLabel
    // Error parsing type: , name: toggleLabelAttributes.storage
    // Error parsing type: , name: toggle.storage
    // Error parsing type: , name: toggleBackgroundOn.storage
    // Error parsing type: , name: toggleBackgroundOff.storage
}

+ (_Bool)requiresConstraintBasedLayout;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)toggleDidChangeValue;
- (void)switchToggleAppearance;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectRecsEnabled:(_Bool)arg1;
@property(nonatomic, retain) UIImageView *toggleBackgroundOff;
@property(nonatomic, retain) UIImageView *toggleBackgroundOn;
@property(nonatomic, retain) UISwitch *toggle;
@property(nonatomic, copy) NSDictionary *toggleLabelAttributes;
@property(nonatomic, readonly) UILabel *toggleLabel; // @synthesize toggleLabel;
@property(nonatomic) _Bool selectRecsEnabled;
@property(nonatomic, readonly) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker;

@end

