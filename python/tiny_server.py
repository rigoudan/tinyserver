from bottle.bottle import *

def new_app(root, host, port):
    app = Bottle()
    @app.route('/<path:path>')
    def callback(path):
        return static_file(path, root=root)
    run(app, host=host, port=port)
new_app('upload',"192.168.100.2",8887)
