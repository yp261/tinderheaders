//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "UITextViewDelegate-Protocol.h"

@class CAEmitterLayer, JLBBouncyButton, NSArray, NSMutableDictionary, NSString, UIButton, UIColor, UILabel, UITextView, UIView;
@protocol TNDRAppRaterWindowDelegate;

@interface TNDRAppRaterWindow : UIWindow <UITextViewDelegate>
{
    UIColor *_actionButtonBGColor;
    UIColor *_cancelButtonBGColor;
    UIColor *_cancelButtonTextColor;
    UIColor *_actionButtonTextColor;
    UIColor *_detailLabelTextColor;
    UIColor *_titleLabelTextColor;
    _Bool _hasButtons;
    _Bool _needsButtons;
    long long _lastSelectedStarRating;
    id <TNDRAppRaterWindowDelegate> _raterDelegate;
    long long _showCause;
    UIWindow *_originalKeyWindow;
    long long _state;
    UIView *_backgroundView;
    UIView *_containerView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIView *_starsContainerView;
    UITextView *_feedbackTextView;
    UILabel *_placeholderLabel;
    UILabel *_titleTextSizingLabel;
    UILabel *_detailTextSizingLabel;
    NSMutableDictionary *_sizingDictionary;
    UIView *_topButtonSeparator;
    NSArray *_stars;
    JLBBouncyButton *_star1;
    JLBBouncyButton *_star2;
    JLBBouncyButton *_star3;
    JLBBouncyButton *_star4;
    JLBBouncyButton *_star5;
    UIView *_actionsView;
    UIButton *_cancelButton;
    UIButton *_actionButton;
    CAEmitterLayer *_fireworksLayer;
    NSString *_titleTextToChangeTo;
    NSString *_detailTextToChangeTo;
    NSString *_cancelButtonText;
    NSString *_actionButtonText;
    NSArray *_activeItems;
    NSArray *_inactiveItems;
    struct CGRect _titleTextRect;
    struct CGRect _detailTextRect;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *inactiveItems; // @synthesize inactiveItems=_inactiveItems;
@property(retain, nonatomic) NSArray *activeItems; // @synthesize activeItems=_activeItems;
@property(nonatomic) _Bool needsButtons; // @synthesize needsButtons=_needsButtons;
@property(nonatomic) _Bool hasButtons; // @synthesize hasButtons=_hasButtons;
@property(nonatomic) struct CGRect detailTextRect; // @synthesize detailTextRect=_detailTextRect;
@property(nonatomic) struct CGRect titleTextRect; // @synthesize titleTextRect=_titleTextRect;
@property(retain, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *detailTextToChangeTo; // @synthesize detailTextToChangeTo=_detailTextToChangeTo;
@property(retain, nonatomic) NSString *titleTextToChangeTo; // @synthesize titleTextToChangeTo=_titleTextToChangeTo;
@property(retain, nonatomic) CAEmitterLayer *fireworksLayer; // @synthesize fireworksLayer=_fireworksLayer;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *actionsView; // @synthesize actionsView=_actionsView;
@property(retain, nonatomic) JLBBouncyButton *star5; // @synthesize star5=_star5;
@property(retain, nonatomic) JLBBouncyButton *star4; // @synthesize star4=_star4;
@property(retain, nonatomic) JLBBouncyButton *star3; // @synthesize star3=_star3;
@property(retain, nonatomic) JLBBouncyButton *star2; // @synthesize star2=_star2;
@property(retain, nonatomic) JLBBouncyButton *star1; // @synthesize star1=_star1;
@property(retain, nonatomic) NSArray *stars; // @synthesize stars=_stars;
@property(retain, nonatomic) UIView *topButtonSeparator; // @synthesize topButtonSeparator=_topButtonSeparator;
@property(retain, nonatomic) NSMutableDictionary *sizingDictionary; // @synthesize sizingDictionary=_sizingDictionary;
@property(retain, nonatomic) UILabel *detailTextSizingLabel; // @synthesize detailTextSizingLabel=_detailTextSizingLabel;
@property(retain, nonatomic) UILabel *titleTextSizingLabel; // @synthesize titleTextSizingLabel=_titleTextSizingLabel;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UITextView *feedbackTextView; // @synthesize feedbackTextView=_feedbackTextView;
@property(retain, nonatomic) UIView *starsContainerView; // @synthesize starsContainerView=_starsContainerView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIWindow *originalKeyWindow; // @synthesize originalKeyWindow=_originalKeyWindow;
@property(nonatomic) long long showCause; // @synthesize showCause=_showCause;
@property(nonatomic) __weak id <TNDRAppRaterWindowDelegate> raterDelegate; // @synthesize raterDelegate=_raterDelegate;
- (void).cxx_destruct;
- (struct CGSize)sizeForLabelFitting;
- (double)innerContentWidth;
- (double)appRaterDefaultWidth;
- (double)windowHeight;
- (struct CGRect)defaultFrameForFeedbackTextView;
- (id)keyWindow;
- (void)buildFireworksLayer;
- (void)animateNegativeRating;
- (void)animatePositiveRating;
- (void)resetStarRating;
- (void)addParticlesWithPoint:(struct CGPoint)arg1;
- (void)animateFireworksForMaxRating;
- (void)animateStarRatingTo:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)starRatingFromStar:(id)arg1;
- (void)handleActionButtonTapped:(id)arg1;
- (void)handleCancelButtonTapped:(id)arg1;
- (void)handleStarTapped:(id)arg1;
- (void)handleTapper:(id)arg1;
- (id)actionButtonTextForState:(long long)arg1;
- (id)cancelButtonTextForState:(long long)arg1;
- (id)detailTextForState:(long long)arg1;
- (id)titleForState:(long long)arg1;
- (id)activeStar;
- (id)inactiveStar;
- (void)focusTextViewIfNecessary;
- (void)restoreOriginalWindow;
- (void)hideBackground;
- (void)closeRater;
- (void)crossDissolveButton:(id)arg1 withNewTitle:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)crossDissolveLabel:(id)arg1 withNewText:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionToNextState:(CDUnknownBlockType)arg1;
- (void)revealButtonsWithAnimation;
- (void)animateDialogAppearance:(CDUnknownBlockType)arg1;
- (void)animateDialogAppearance;
- (void)showActionButtonsWithoutAnimation;
- (struct CGRect)storedFrameForView:(id)arg1;
- (void)storeFrame:(struct CGRect)arg1 forView:(id)arg2;
- (void)adjustSubviewFramesForState:(long long)arg1;
- (void)calculateSubviewSizesForState:(long long)arg1;
- (void)adjustContentForState:(long long)arg1;
@property(nonatomic) long long lastSelectedStarRating; // @synthesize lastSelectedStarRating=_lastSelectedStarRating;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)buildColorsForActionButtons;
- (id)createStar;
- (void)buildStarsForRating;
- (void)setup;
- (id)causeFromIntegerCause:(long long)arg1;
- (void)trackAppRaterOpenEventWithMode:(id)arg1;
- (void)closeAppRatingWindow:(_Bool)arg1;
- (void)promptUserForRating;
- (void)showFeedbackDialog;
- (void)showThankYouForReviewing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

