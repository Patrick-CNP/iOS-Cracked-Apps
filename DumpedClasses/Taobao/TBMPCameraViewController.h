//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAAnimationDelegate.h"
#import "UIAlertViewDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, MBProgressHUD, NSString, TBMPThumbnailBar, UIButton, UIView;

@interface TBMPCameraViewController : UIViewController <CAAnimationDelegate, UIAlertViewDelegate>
{
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_monitorLayer;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    AVCaptureStillImageOutput *_output;
    UIView *_cameraContainerView;
    UIView *_monitorView;
    UIButton *_backButton;
    UIButton *_takePicButton;
    UIButton *_confirmButton;
    UIButton *_flashlightButton;
    UIButton *_cameraSwapButton;
    CDStruct_a90cff18 *_image_rule;
    TBMPThumbnailBar *_thumbnailBar;
    MBProgressHUD *_HUD;
    _Bool _isViewVisible;
    _Bool _bFirstResponse;
    CDUnknownBlockType _ResultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ResultBlock; // @synthesize ResultBlock=_ResultBlock;
@property(nonatomic) _Bool bFirstResponse; // @synthesize bFirstResponse=_bFirstResponse;
- (void).cxx_destruct;
- (id)outputFromImage:(id)arg1 andImageFileSize:(long long)arg2 byRule:(CDStruct_a90cff18 *)arg3;
- (void)tapToAlbum:(id)arg1;
- (void)confirmAction;
- (void)takeButtonAction;
- (void)unfreeze;
- (void)freeze;
- (void)backButtonAction;
- (void)swapFrontAndBackCameras;
- (void)turnFlashLight:(id)arg1;
- (id)cameraWithPosition:(long long)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)cameraEmergency;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)embedPreviewInView:(id)arg1 MonitorView:(id)arg2;
- (id)initWithFirstResponse:(_Bool)arg1;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

