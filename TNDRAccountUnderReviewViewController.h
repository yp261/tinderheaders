//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel;
@protocol TNDRViewControllerAnimatedTransitioning;

@interface TNDRAccountUnderReviewViewController : UIViewController
{
    // Error parsing type: , name: accountUnderReviewAnimationController
    // Error parsing type: , name: analytics
    // Error parsing type: , name: notificationCenter
    // Error parsing type: , name: application
    // Error parsing type: , name: isCompactScreen
    // Error parsing type: , name: logoutButton.storage
    // Error parsing type: , name: underReviewIconImageView
    // Error parsing type: , name: underReviewTitleLabel.storage
    // Error parsing type: , name: underReviewSubtitleLabel.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupGradientBackground;
- (void)viewDidLoad;
@property(nonatomic, retain) UILabel *underReviewSubtitleLabel;
@property(nonatomic, retain) UILabel *underReviewTitleLabel;
@property(nonatomic, readonly) UIImageView *underReviewIconImageView; // @synthesize underReviewIconImageView;
@property(nonatomic, retain) UIButton *logoutButton;
@property(nonatomic, retain) id <TNDRViewControllerAnimatedTransitioning> accountUnderReviewAnimationController; // @synthesize accountUnderReviewAnimationController;

@end
