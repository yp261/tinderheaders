//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView, UIImageView;

@interface TNDRPhotoCell : UICollectionViewCell
{
    UIImageView *_photo;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_overlayImageView;
}

@property(retain, nonatomic) UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)makeFrameAndShadow;
- (void)makeActivityView;
- (void)makePhotoView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

