//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSDate, TNDRInstagramPhotoData, TNDRNetworkImageView, UIActivityIndicatorView, UILabel, UIView;

@interface TNDRInstagramPhotoViewerCollectionViewCell : UICollectionViewCell
{
    NSDate *_date;
    TNDRInstagramPhotoData *_photoData;
    TNDRNetworkImageView *_photoView;
    UIView *_relativeDateView;
    UILabel *_relativeDateLabel;
    UIActivityIndicatorView *_loadingIndicator;
    struct CGPoint _imageViewCenter;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILabel *relativeDateLabel; // @synthesize relativeDateLabel=_relativeDateLabel;
@property(retain, nonatomic) UIView *relativeDateView; // @synthesize relativeDateView=_relativeDateView;
@property(retain, nonatomic) TNDRNetworkImageView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) struct CGPoint imageViewCenter; // @synthesize imageViewCenter=_imageViewCenter;
@property(retain, nonatomic) TNDRInstagramPhotoData *photoData; // @synthesize photoData=_photoData;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)finishedPanning;
- (void)prepareForPanning;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

