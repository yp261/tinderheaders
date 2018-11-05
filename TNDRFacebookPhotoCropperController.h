//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol TNDRFacebookImagePickerDelegate;

@interface TNDRFacebookPhotoCropperController : UIViewController <UIScrollViewDelegate>
{
    struct CGPoint _startingImageViewCenter;
    struct CGAffineTransform _startingImageViewTransform;
    UIScrollView *_scrollView;
    UIView *_squareView;
    UIView *_outlineView;
    UIButton *_chooseButton;
    UIButton *_cancelButton;
    UILabel *_directionsLabel;
    UIView *_spinnerBackgroundView;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_imageView;
    NSString *_facebookID;
    id <TNDRFacebookImagePickerDelegate> _photoPickerDelegate;
}

@property(nonatomic) __weak id <TNDRFacebookImagePickerDelegate> photoPickerDelegate; // @synthesize photoPickerDelegate=_photoPickerDelegate;
@property(retain, nonatomic) NSString *facebookID; // @synthesize facebookID=_facebookID;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)croppingRectAsPercentages;
- (id)croppedImage;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setupScrollView;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

