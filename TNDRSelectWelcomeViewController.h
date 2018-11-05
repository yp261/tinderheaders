//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSAttributedString, TNDRAnalyticsTracker, TNDRURLManager, UIButton, UILabel, UIView;
@protocol UIViewControllerAnimatedTransitioning;

@interface TNDRSelectWelcomeViewController : UIViewController
{
    // Error parsing type: , name: urlManager
    // Error parsing type: , name: analyticsTracker
    // Error parsing type: , name: blurView.storage
    // Error parsing type: , name: titleLabel.storage
    // Error parsing type: , name: detailLabel.storage
    // Error parsing type: , name: selectFlameIcon.storage
    // Error parsing type: , name: confirmationButton.storage
    // Error parsing type: , name: flameIconWidth
    // Error parsing type: , name: flameIconHeight
    // Error parsing type: , name: flameBackgroundDimension
    // Error parsing type: , name: buttonHeight
    // Error parsing type: , name: attributedTitle.storage
    // Error parsing type: , name: attributedDetailText.storage
    // Error parsing type: , name: animationController
}

+ (id)viewControllerNavigationKey;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) id <UIViewControllerAnimatedTransitioning> animationController; // @synthesize animationController;
@property(nonatomic, retain) NSAttributedString *attributedDetailText;
@property(nonatomic, retain) NSAttributedString *attributedTitle;
@property(nonatomic, readonly) double buttonHeight; // @synthesize buttonHeight;
@property(nonatomic, readonly) double flameBackgroundDimension; // @synthesize flameBackgroundDimension;
@property(nonatomic, readonly) double flameIconHeight; // @synthesize flameIconHeight;
@property(nonatomic, readonly) double flameIconWidth; // @synthesize flameIconWidth;
- (void)didTapConfirmation;
- (void)setupConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UIButton *confirmationButton;
@property(nonatomic, retain) UIView *selectFlameIcon;
@property(nonatomic, retain) UILabel *detailLabel;
@property(nonatomic, retain) UILabel *titleLabel;
@property(nonatomic, retain) UIView *blurView;
@property(nonatomic, readonly) TNDRAnalyticsTracker *analyticsTracker; // @synthesize analyticsTracker;
@property(nonatomic, readonly) TNDRURLManager *urlManager; // @synthesize urlManager;

@end
