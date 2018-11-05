//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIView;

@interface TNDRFacebookPhotoAlbumListController : UITableViewController
{
    NSArray *_albums;
    _Bool _fbAlbumsCompleted;
    _Bool _fbMyTaggedPhotosCompleted;
    UIView *_activityContainerView;
    id _photoPickerDelegate;
    NSArray *_taggedPhotosOfMeArray;
}

@property(retain, nonatomic) NSArray *taggedPhotosOfMeArray; // @synthesize taggedPhotosOfMeArray=_taggedPhotosOfMeArray;
@property(nonatomic) __weak id photoPickerDelegate; // @synthesize photoPickerDelegate=_photoPickerDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeFBRequestForPhotosTaggedWithMe;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadAlbums;
- (void)setup;
- (id)initWithStyle:(long long)arg1;

@end
