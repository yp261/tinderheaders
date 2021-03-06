//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKMapViewDelegate-Protocol.h"
#import "SMCalloutViewDelegate-Protocol.h"
#import "TNDRPassportMapSearchViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, CLLocation, MKAnnotationView, MKPlacemark, NSString, NSTimer, TNDRAppDelegate, TNDRLocationManager, TNDRPassportMapAnnotation, TNDRPassportMapAnnotationLookup, TNDRPassportMapView, TNDRPassportMapViewCalloutView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol TNDRPassportMapViewDelegate, TNDRPassportPaywallDelegate;

@interface TNDRPassportMapViewController : UIViewController <UIGestureRecognizerDelegate, MKMapViewDelegate, SMCalloutViewDelegate, TNDRPassportMapSearchViewControllerDelegate>
{
    CALayer *_mapLayer;
    NSTimer *_timer;
    _Bool _usingCurrentUserLocation;
    _Bool _dismissCurrentCallout;
    _Bool _userPinDrop;
    _Bool _notZoomed;
    _Bool _movedMapWithAFingerOrANipple;
    _Bool _mapRegionIsChanging;
    _Bool _dropPinInProgress;
    id <TNDRPassportPaywallDelegate> _paywallDelegate;
    id <TNDRPassportMapViewDelegate> _delegate;
    CLLocation *_activeLocation;
    MKPlacemark *_activePlacemark;
    TNDRPassportMapView *_mapView;
    TNDRPassportMapViewCalloutView *_calloutView;
    TNDRPassportMapAnnotationLookup *_annotationLookup;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    CDUnknownBlockType _moveToAnnotateMapLocationCompletionBlock;
    CDUnknownBlockType _didAddAnnotationCompletionBlock;
    MKAnnotationView *_selectedAnnotationView;
    NSTimer *_pinDropCalloutAnimTimer;
    long long _calloutViewLoadingState;
    TNDRPassportMapAnnotation *_lastAnnotationOperation;
    MKPlacemark *_placemarkSelectedFromSearch;
    MKAnnotationView *_lastSelectedAnnotationView;
    UIPanGestureRecognizer *_mapMoveGestureRecognizer;
    struct CLLocationCoordinate2D _currentLocation;
}

@property(nonatomic, getter=isDropPinInProgress) _Bool dropPinInProgress; // @synthesize dropPinInProgress=_dropPinInProgress;
@property(nonatomic) _Bool mapRegionIsChanging; // @synthesize mapRegionIsChanging=_mapRegionIsChanging;
@property(nonatomic, getter=hasMovedMapWithAFingerOrANipple) _Bool movedMapWithAFingerOrANipple; // @synthesize movedMapWithAFingerOrANipple=_movedMapWithAFingerOrANipple;
@property(retain, nonatomic) UIPanGestureRecognizer *mapMoveGestureRecognizer; // @synthesize mapMoveGestureRecognizer=_mapMoveGestureRecognizer;
@property(nonatomic, getter=isNotZoomed) _Bool notZoomed; // @synthesize notZoomed=_notZoomed;
@property(nonatomic, getter=isUserPinDrop) _Bool userPinDrop; // @synthesize userPinDrop=_userPinDrop;
@property(retain, nonatomic) MKAnnotationView *lastSelectedAnnotationView; // @synthesize lastSelectedAnnotationView=_lastSelectedAnnotationView;
@property(retain, nonatomic) MKPlacemark *placemarkSelectedFromSearch; // @synthesize placemarkSelectedFromSearch=_placemarkSelectedFromSearch;
@property(retain, nonatomic) TNDRPassportMapAnnotation *lastAnnotationOperation; // @synthesize lastAnnotationOperation=_lastAnnotationOperation;
@property(nonatomic) long long calloutViewLoadingState; // @synthesize calloutViewLoadingState=_calloutViewLoadingState;
@property(retain, nonatomic) NSTimer *pinDropCalloutAnimTimer; // @synthesize pinDropCalloutAnimTimer=_pinDropCalloutAnimTimer;
@property(retain, nonatomic) MKAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(copy, nonatomic) CDUnknownBlockType didAddAnnotationCompletionBlock; // @synthesize didAddAnnotationCompletionBlock=_didAddAnnotationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType moveToAnnotateMapLocationCompletionBlock; // @synthesize moveToAnnotateMapLocationCompletionBlock=_moveToAnnotateMapLocationCompletionBlock;
@property(nonatomic) _Bool dismissCurrentCallout; // @synthesize dismissCurrentCallout=_dismissCurrentCallout;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) TNDRPassportMapAnnotationLookup *annotationLookup; // @synthesize annotationLookup=_annotationLookup;
@property(retain, nonatomic) TNDRPassportMapViewCalloutView *calloutView; // @synthesize calloutView=_calloutView;
@property(retain, nonatomic) TNDRPassportMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) MKPlacemark *activePlacemark; // @synthesize activePlacemark=_activePlacemark;
@property(retain, nonatomic) CLLocation *activeLocation; // @synthesize activeLocation=_activeLocation;
@property(nonatomic, getter=isUsingCurrentUserLocation) _Bool usingCurrentUserLocation; // @synthesize usingCurrentUserLocation=_usingCurrentUserLocation;
@property(nonatomic) __weak id <TNDRPassportMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TNDRPassportPaywallDelegate> paywallDelegate; // @synthesize paywallDelegate=_paywallDelegate;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)dropPin:(id)arg1;
- (void)pinTapped;
- (id)checkmarkImage;
- (void)calloutViewClicked:(id)arg1;
- (void)setupCalloutViewForTraveling;
- (void)showTravelingCalloutViewWithTitle:(id)arg1 andSubtitle:(id)arg2;
- (void)animateInCalloutView:(id)arg1;
- (void)setupAndDisplayAnnotation:(id)arg1 forAnnotationView:(id)arg2;
- (void)setupCalloutViewWithLeftAirplaneIcon:(_Bool)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)animateSquishAnnotationView:(id)arg1;
- (void)animateInAnnotationView:(id)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)showAnnotation:(id)arg1 moveMap:(_Bool)arg2 zoomed:(_Bool)arg3 animated:(_Bool)arg4 fromSearch:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showAnnotation:(id)arg1 zoomed:(_Bool)arg2 animated:(_Bool)arg3 fromSearch:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showAnnotation:(id)arg1 zoomed:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showAnnotationAtLocation:(id)arg1 moveMap:(_Bool)arg2 zoomed:(_Bool)arg3 animated:(_Bool)arg4 isCurrentUserLocation:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showAnnotationAtLocation:(id)arg1 moveMap:(_Bool)arg2 zoomed:(_Bool)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (float)round:(float)arg1 toSignificantFigures:(int)arg2;
- (_Bool)isDouble:(double)arg1 equivalentTo:(double)arg2;
- (_Bool)isRegion:(CDStruct_b7cb895d)arg1 equalToRegion:(CDStruct_b7cb895d)arg2;
- (void)moveToAnnotatedMapLocation:(id)arg1 moveMap:(_Bool)arg2 zoomed:(_Bool)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)moveToAnnotatedMapLocation:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveToAnnotatedMapLocation:(id)arg1 animated:(_Bool)arg2;
- (void)moveToAnnotatedMapLocation:(id)arg1;
- (void)didSelectToCloseMapView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleMapMovePanGestureRecognizer:(id)arg1;
- (void)_handleDoubleTap;
- (void)setupMapGestureRecognizers;
@property(readonly, nonatomic) TNDRLocationManager *locationManager;
@property(readonly, nonatomic) TNDRAppDelegate *appDelegate;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

