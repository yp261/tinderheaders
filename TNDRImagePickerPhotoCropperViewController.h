//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol TNDRImagePickerPhotoCropperDelegate;

@interface TNDRImagePickerPhotoCropperViewController : UIViewController <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    id <TNDRImagePickerPhotoCropperDelegate> _photoPickerDelegate;
    UIScrollView *_scrollView;
    UIView *_outlineView;
    UIButton *_chooseButton;
    UIButton *_cancelButton;
    UILabel *_directionsLabel;
    UIView *_spinnerBackgroundView;
    UIActivityIndicatorView *_activityIndicator;
    struct CGPoint _startingImageViewCenter;
    struct CGAffineTransform _startingImageViewTransform;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *spinnerBackgroundView; // @synthesize spinnerBackgroundView=_spinnerBackgroundView;
@property(retain, nonatomic) UILabel *directionsLabel; // @synthesize directionsLabel=_directionsLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGAffineTransform startingImageViewTransform; // @synthesize startingImageViewTransform=_startingImageViewTransform;
@property(nonatomic) struct CGPoint startingImageViewCenter; // @synthesize startingImageViewCenter=_startingImageViewCenter;
@property(nonatomic) __weak id <TNDRImagePickerPhotoCropperDelegate> photoPickerDelegate; // @synthesize photoPickerDelegate=_photoPickerDelegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)croppingRectAsPercentages;
- (id)croppedImage;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setupScrollView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

