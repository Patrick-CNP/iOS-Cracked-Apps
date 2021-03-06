//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTPage.h"

#import "ONESBaseMapEntranceDelegate.h"
#import "SAirportComProtocol.h"
#import "SBottomContainerViewDelegate.h"
#import "SBulletinBoardsCallback.h"
#import "SCancelTripComDelegate.h"
#import "SCarPoolComDelegate.h"
#import "SHelpCallCarComDelegate.h"
#import "SMapBizComDelegate.h"
#import "SMapDelegate.h"
#import "SNIMComProtocol.h"
#import "SOrderActComDelegate.h"
#import "SOrderComDelegate.h"
#import "SPhoneProtectedComProtocol.h"
#import "SResetPosComProtocol.h"
#import "SSInServiceBubbleComProtocol.h"
#import "SSctxComDelegate.h"
#import "SSmoothMoveComDelegate.h"

@class NSString, ONESBasePointAnnotation, SActButtonCom, SAirportCom, SBaseWebCom, SBicycleNumberCom, SBottomContainerView, SBulletinBoardsCom, SCancelTripCom, SCarpoolCom, SDriverCarInfoCardCom, SEvaluateCom, SHelpCallCarCom, SLockCom, SMapBizCom, SMapButtonCom, SMapLineCom, SNIMCom, SNewDriverCarInfoCardCom, SOperationCardCom, SOrderActCom, SOrderCom, SPayCom, SPhoneProtectedCom, SPopupCom, SPosMarkerCom, SResetPosCom, SSInServiceBubbleCom, SSctxCom, SShareCom, SShareJourneyCom, SSmoothMoveCom;

@interface SInServicePage : SPTPage <SAirportComProtocol, SCancelTripComDelegate, SHelpCallCarComDelegate, SMapDelegate, SMapBizComDelegate, SOrderActComDelegate, SResetPosComProtocol, SSmoothMoveComDelegate, SNIMComProtocol, SPhoneProtectedComProtocol, SSctxComDelegate, SBulletinBoardsCallback, SBottomContainerViewDelegate, SOrderComDelegate, ONESBaseMapEntranceDelegate, SSInServiceBubbleComProtocol, SCarPoolComDelegate>
{
    SBulletinBoardsCom *_bbCom;
    SShareJourneyCom *_shareJourneyCom;
    SShareCom *_shareCom;
    SSmoothMoveCom *_smoothMoveCom;
    SSInServiceBubbleCom *_bubbleCom;
    SOrderActCom *_orderActCom;
    ONESBasePointAnnotation *_an;
    SCancelTripCom *_cancelTripCom;
    SMapLineCom *_mapLineCom;
    SMapBizCom *_mapBizCom;
    SHelpCallCarCom *_helpCallCarCom;
    SPhoneProtectedCom *_phoneProtectedCom;
    SPosMarkerCom *_posMarkerCom;
    SResetPosCom *_resetPosCom;
    SSctxCom *_sctxCom;
    SNewDriverCarInfoCardCom *_nDriverInfoCom;
    SDriverCarInfoCardCom *_driverInfoCom;
    SLockCom *_lockCom;
    SAirportCom *_airportCom;
    SBaseWebCom *_webCom;
    SMapButtonCom *_mapButtonCom;
    SPopupCom *_popupCom;
    SCarpoolCom *_carpoolCom;
    SBicycleNumberCom *_bicycleNumberCom;
    SOperationCardCom *_operationCardCom;
    SOrderCom *_orderCom;
    SNIMCom *_imCom;
    SEvaluateCom *_evaluateCom;
    SPayCom *_payCom;
    SActButtonCom *_actButtonCom;
}

@property(retain, nonatomic) SActButtonCom *actButtonCom; // @synthesize actButtonCom=_actButtonCom;
@property(retain, nonatomic) SPayCom *payCom; // @synthesize payCom=_payCom;
@property(retain, nonatomic) SEvaluateCom *evaluateCom; // @synthesize evaluateCom=_evaluateCom;
@property(retain, nonatomic) SNIMCom *imCom; // @synthesize imCom=_imCom;
@property(retain, nonatomic) SOrderCom *orderCom; // @synthesize orderCom=_orderCom;
@property(retain, nonatomic) SOperationCardCom *operationCardCom; // @synthesize operationCardCom=_operationCardCom;
@property(retain, nonatomic) SBicycleNumberCom *bicycleNumberCom; // @synthesize bicycleNumberCom=_bicycleNumberCom;
@property(retain, nonatomic) SCarpoolCom *carpoolCom; // @synthesize carpoolCom=_carpoolCom;
@property(retain, nonatomic) SPopupCom *popupCom; // @synthesize popupCom=_popupCom;
@property(retain, nonatomic) SMapButtonCom *mapButtonCom; // @synthesize mapButtonCom=_mapButtonCom;
@property(retain, nonatomic) SBaseWebCom *webCom; // @synthesize webCom=_webCom;
@property(retain, nonatomic) SAirportCom *airportCom; // @synthesize airportCom=_airportCom;
@property(retain, nonatomic) SLockCom *lockCom; // @synthesize lockCom=_lockCom;
@property(retain, nonatomic) SDriverCarInfoCardCom *driverInfoCom; // @synthesize driverInfoCom=_driverInfoCom;
@property(retain, nonatomic) SNewDriverCarInfoCardCom *nDriverInfoCom; // @synthesize nDriverInfoCom=_nDriverInfoCom;
@property(retain, nonatomic) SSctxCom *sctxCom; // @synthesize sctxCom=_sctxCom;
@property(retain, nonatomic) SResetPosCom *resetPosCom; // @synthesize resetPosCom=_resetPosCom;
@property(retain, nonatomic) SPosMarkerCom *posMarkerCom; // @synthesize posMarkerCom=_posMarkerCom;
@property(retain, nonatomic) SPhoneProtectedCom *phoneProtectedCom; // @synthesize phoneProtectedCom=_phoneProtectedCom;
@property(retain, nonatomic) SHelpCallCarCom *helpCallCarCom; // @synthesize helpCallCarCom=_helpCallCarCom;
@property(retain, nonatomic) SMapBizCom *mapBizCom; // @synthesize mapBizCom=_mapBizCom;
@property(retain, nonatomic) SMapLineCom *mapLineCom; // @synthesize mapLineCom=_mapLineCom;
@property(retain, nonatomic) SCancelTripCom *cancelTripCom; // @synthesize cancelTripCom=_cancelTripCom;
@property(retain, nonatomic) ONESBasePointAnnotation *an; // @synthesize an=_an;
@property(retain, nonatomic) SOrderActCom *orderActCom; // @synthesize orderActCom=_orderActCom;
@property(retain, nonatomic) SSInServiceBubbleCom *bubbleCom; // @synthesize bubbleCom=_bubbleCom;
@property(retain, nonatomic) SSmoothMoveCom *smoothMoveCom; // @synthesize smoothMoveCom=_smoothMoveCom;
@property(retain, nonatomic) SShareCom *shareCom; // @synthesize shareCom=_shareCom;
@property(retain, nonatomic) SShareJourneyCom *shareJourneyCom; // @synthesize shareJourneyCom=_shareJourneyCom;
@property(retain, nonatomic) SBulletinBoardsCom *bbCom; // @synthesize bbCom=_bbCom;
- (void).cxx_destruct;
- (void)didUpdateContentView:(id)arg1;
- (void)addObserverForBubbleView;
- (void)addObserver;
- (void)operationCardComRequireDisplayLoading;
- (void)operationCardCom:(id)arg1 didLoadViewModel:(id)arg2;
- (void)mapEntranceBindTrafficConfig:(id)arg1;
- (void)orderComOrderStatusChange:(id)arg1;
- (void)orderComRefreshBubble:(id)arg1;
- (void)refreshBubbleForMapEntrance:(id)arg1;
- (void)containerView:(id)arg1 didTransferToHeight:(double)arg2 gesture:(_Bool)arg3;
- (void)containerView:(id)arg1 willTransferToHeight:(double)arg2 duration:(double)arg3 gesture:(_Bool)arg4;
- (_Bool)containerViewCanSwitchExpand:(id)arg1;
- (id)viewSourcesForContainerView:(id)arg1;
- (struct CGRect)viewFrameForComponent:(id)arg1;
- (id)viewContainerForComponent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)createCom:(long long)arg1;
- (void)viewDidLoad;
- (void)flightCanceledResendOrder;
- (_Bool)needHandleFlight;
- (void)cancelTripComRequestSuccessWithoutGoToCancelReasonPage:(id)arg1;
- (void)cancelTripReason:(id)arg1;
- (void)cancelTripComCallDriver:(id)arg1;
- (void)cancelTripComRequestFailure:(id)arg1;
- (void)cancelTripComRequestSuccess:(id)arg1;
- (void)driverInfoCardCom:(id)arg1 expand:(_Bool)arg2;
- (void)driverAvatarActionForSDriverCarInfoCardCom:(id)arg1 openDriverPage:(id)arg2;
- (void)helpCallCarCom:(id)arg1 didClickShareToPassengerBtnWithModel:(id)arg2;
- (struct UIEdgeInsets)getMapVisibleRectEdgeInsetsForResetPosCom:(id)arg1;
- (void)locationButton:(id)arg1 enabled:(_Bool)arg2;
- (void)reloadMapAnnotations:(id)arg1;
- (void)reloadMapRouts:(id)arg1;
- (void)reloadAnnotationView:(id)arg1;
- (void)mapSceneTypeChangedUpdateCalloutView:(id)arg1;
- (void)reloadDataForNewDriverCarInfo:(id)arg1;
- (void)driverInfoCardCom:(id)arg1 expand:(_Bool)arg2;
- (id)actComForNewDriverCarCom;
- (id)orderActCom:(id)arg1 paramsForType:(long long)arg2;
- (void)orderActCom:(id)arg1 didClickItemWithType:(long long)arg2;
- (void)reloadOnPosMapMarker;
- (void)posMarkerBubbleSizeDidUpdate:(id)arg1;
- (void)posMarkerCom:(id)arg1 cellClickForType:(long long)arg2;
- (void)posMarkerCom:(id)arg1 cellType:(long long)arg2 addrDidChange:(id)arg3;
- (void)adjustMapBestViewWithComponent:(id)arg1;
- (void)component:(id)arg1 willUseOtherRestPosCom:(long long)arg2;
- (id)annotationsWithBizType:(long long)arg1;
- (void)locationButtonClickForresetPosCom:(id)arg1;
- (id)getONESBaseMapEntranceForSResetPosCom:(id)arg1;
- (void)bulletinBoardsContentChanged;
- (void)bulletinBoards:(id)arg1 didBBFrameChanged:(struct CGRect)arg2 isOpened:(_Bool)arg3 isSupportHandle:(_Bool)arg4;
- (id)bulletinBoards:(id)arg1 belowViewForViewContainer:(id)arg2;
- (void)openWebViewWithURLStr:(id)arg1 cardID:(id)arg2 params:(id)arg3;
- (void)bulletinBoards:(id)arg1 clickedCard:(id)arg2 actBtnAtIndex:(long long)arg3 actionType:(long long)arg4 targetURL:(id)arg5 extenralParams:(id)arg6;
- (void)stopSmoothMoveWithComponent:(id)arg1;
- (void)pauseSmoothMoveWithComponent:(id)arg1;
- (void)restartSmoothMoveWithComponent:(id)arg1;
- (void)startSmoothMoveWithComponent:(id)arg1;
- (void)driverDataDidUpdateToUpdateMapLine:(id)arg1;
- (void)driverAnnotationDidUpdateInSmoothMoveCom:(id)arg1;
- (void)dataDidUpdateInSmoothMoveCom:(id)arg1;
- (id)mapEntranceForSmoothMoveCom:(id)arg1;
- (void)imCom:(id)arg1 didAddToSuperView:(_Bool)arg2;
- (id)tipBubbleBottomViewForComponent:(id)arg1;
- (id)tipBubbleViewContainerForComponent:(id)arg1;
- (void)phoneProtectCom:(id)arg1 didAddToSuperView:(_Bool)arg2;
- (void)SCTXCom:(id)arg1 didReceiveData:(id)arg2;
- (void)handleSomeViewsInteractionWithFlowViewState:(unsigned long long)arg1;
- (void)handleSomeViewsLayoutWithPoolViewFrame:(struct CGRect)arg1 flowViewState:(unsigned long long)arg2;
- (void)removeComponentViewsFromFlow;
- (void)removeComponentViewsFromPool;
- (void)addComponentViewsIntoFlow;
- (void)addComponentViewsIntoPool;
- (void)updateCardFlowViewItemForComponent:(id)arg1;
- (void)updateCardViews;

// Remaining properties
@property(readonly, nonatomic) SBottomContainerView *bottomContainerView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

