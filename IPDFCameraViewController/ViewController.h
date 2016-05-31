//
//  ViewController.h
//  IPDFCameraViewController
//
//  Created by Maximilian Mackh on 11/01/15.
//  Copyright (c) 2015 Maximilian Mackh. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol IPDFCameraViewControllerDelegate 

-(void) takeSnapshotWithPath: (NSString *) imageFilePath;

@end

@interface ViewController <IPDFCameraViewControllerDelegate> : UIViewController


@end

