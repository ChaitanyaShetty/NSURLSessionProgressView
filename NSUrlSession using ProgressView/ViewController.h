//
//  ViewController.h
//  NSUrlSession using ProgressView
//
//  Created by chaitanya on 05/10/16.
//  Copyright © 2016 chaitanya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSURLSessionDelegate, NSURLSessionDownloadDelegate>
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) IBOutlet UIProgressView *progressView;

@end

