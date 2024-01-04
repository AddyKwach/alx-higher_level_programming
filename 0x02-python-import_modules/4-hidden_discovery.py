#!/usr/bin/python3
import dis
import requests

def download_module(url, destination):
    response = requests.get(url)
    with open(destination, 'wb') as file:
        file.write(response.content)

def get_hidden_names(module_path):
    with open(module_path, "rb") as file:
        code = file.read()

    names = [item for item in dis.opname.split() if not item.startswith('__')]
    return sorted(names)

if __name__ == "__main__":
    module_url = "https://github.com/alx-tools/0x02.py/raw/master/hidden_4.pyc"
    module_path = "hidden_4.pyc"
    
    download_module(module_url, module_path)
    
    hidden_names = get_hidden_names(module_path)

    for name in hidden_names:
        print(name)
